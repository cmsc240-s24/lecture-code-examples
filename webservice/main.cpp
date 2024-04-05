
#include <crow.h>
#include <string>
using namespace std;
using namespace crow;

response handleHelloGetRequest() 
{
    string body = "Hello, world!";

    // Return the integer HTTP response code, and the response body as a string.
    return response(200, body);
}

response handleCatGetRequest() 
{
    // Specify the path to your image file
    string imageFilename = "cat.png";

    // Open the image file in binary mode to ensure the data is read exactly as stored without any transformation.
    std::ifstream ifs(imageFilename, ios::binary);
    if (!ifs)
    {
        // Return a not found error if the file doesn't exist
        return response(404);
    }

    // Read the entire file into a vector
    vector<char> buffer((istreambuf_iterator<char>(ifs)),
                        (istreambuf_iterator<char>()));

    response resp;
    resp.set_header("Content-Type", "image/png"); // If this was a jpg file then use image/jpeg
    resp.body = string(buffer.begin(), buffer.end());
    return resp;
}


int main()
{
    // Create a simple crow application.
    SimpleApp app; 

    // Define your endpoint and provide a function to handle the request.
    CROW_ROUTE(app, "/api/hello").methods(HTTPMethod::GET)(handleHelloGetRequest);
    CROW_ROUTE(app, "/api/cat").methods(HTTPMethod::GET)(handleCatGetRequest);

    // Set the port and run the app.
    app.port(18080).run();
}




