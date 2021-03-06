//
//	VidyoRoomProperties_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

@class RoomParticipantProfile;
@class RoomSchedule;
typedef NS_ENUM(NSInteger, RoomProfileControlMode);
@interface RoomProperties : NSObject
{
	@public
	NSMutableArray* administrators;
	long creationTime;
	RoomParticipantProfile* defaultProfile;
	NSMutableString* description;
	BOOL hasPassword;
	BOOL isLoggingEnabled;
	BOOL isMembersOnly;
	BOOL isModerated;
	BOOL isPasswordProtected;
	BOOL isPublic;
	NSMutableString* language;
	unsigned int maxParticipants;
	NSMutableArray* members;
	NSMutableArray* moderators;
	NSMutableString* name;
	NSMutableArray* outcasts;
	NSMutableArray* owners;
	NSMutableArray* participantProfiles;
	NSMutableString* password;
	RoomSchedule* schedule;
}

@end
@interface RoomParticipantProfile : NSObject
{
	@public
	RoomProfileControlMode camera;
	RoomProfileControlMode chat;
	RoomProfileControlMode microphone;
	NSMutableString* userId;
	RoomProfileControlMode windowShare;
}

@end
@interface RoomSchedule : NSObject
{
	@public
	NSMutableString* byDay;
	NSMutableString* byMonth;
	NSMutableString* byMonthDay;
	NSMutableString* bySetPos;
	NSMutableString* byWeekNum;
	NSMutableString* byYearDay;
	NSMutableString* count;
	NSMutableString* duration;
	NSMutableString* endTime;
	NSMutableString* eventId;
	NSMutableString* frequency;
	NSMutableString* interval;
	NSMutableString* startTime;
	NSMutableString* until;
	NSMutableString* weekStartDay;
}

@end
