
// for ecs36b, Spring 2023, midterm and final exams
// midterm will take place on May 19 of 2023

#ifndef _RECORD_H_
#define _RECORD_H_

#include <ecs36b_Common.h>
#include <SP_Person.h>
#include <GPS.h>
#include <JvTime.h>
#include <Thing.h>

class Record
{
 private:
 protected:
 public:
  Record();
  std::vector<SP_Person> partners;
  std::vector<Thing> things_acroud;
  JvTime when;
  GPS_DD where;
  virtual Json::Value dump2JSON();
  virtual bool JSON2Object(Json::Value);
}

// the following is just an example

#include <mp3.h> // you don't need to describe the details of mp3
class Sound_Record : public Record
{
 private:
 protected:
 public:
  mp3 myVoice;
  Sound_Record();
  virtual Json::Value dump2JSON();
  virtual bool JSON2Object(Json::Value);
  // more members/momber functions are needed
}
#endif /* _RECORD_H_ */
