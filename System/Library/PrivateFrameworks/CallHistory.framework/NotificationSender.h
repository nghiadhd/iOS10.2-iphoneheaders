/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface NotificationSender : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

