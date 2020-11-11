/**
 * Assume the existence of a `Phone` class.
 * 
 * Define a derived class, `CameraPhone` that contains two data members:
 * an integer named `imageSize`, representing the size in megabytes of
 * each picture, and an integer named `memorySize`, representing the
 * number of megabytes in the camera's memory. There is a constructor
 * that accepts two integer parameters corresponding to the above two
 * data members and which are used to initialize the respective data
 * members. There is also a function named `numPictures` that returns
 * (as an integer) the number of pictures the camera's memory can hold.
 */

class CameraPhone : Phone
{
	private:
		int imageSize;
		int memorySize;
	public:
		CameraPhone(int, int);
		int numPictures();
};

CameraPhone::CameraPhone(int is, int ms)
{
	imageSize = is;
	memorySize = ms;
}

int CameraPhone::numPictures() { return memorySize / imageSize; }