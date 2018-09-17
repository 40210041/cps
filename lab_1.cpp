// //include the header file
// #include <thread>
//
// //create new thread object in the application, passing the name of the function to execute
// //which will create a new thread that will execute the function hello_world.
// thread t(hello_world);
//
// //the thread will start exectuing the function while the main application continues executing.
// //the main app is a thread which is created and launched on app start.
//
// //wait for thread to complete by using t.join() method
// t.join();

//////////////////////////////////
// FIRST MULTI-THREADED EXAMPLE //
//////////////////////////////////

//output should return a string and a int

//include the headers
#include <thread>
#include <iostream>

using namespace std;

//this is the function called by the thread
void hello_world()
{
  //this_thread::get_id() which gets the (OS) assigned ID of the thread running.
  //each run through should produce a different number.
  cout << "Hello from thread " << this_thread::get_id() << endl;
}

int main(int argc, char **argv)
{
  //create a new thread
  thread t(hello_world);

  //wait for the thread to finish (join it)
  t.join();

  //return 0 (OK)
  return 0;
}
