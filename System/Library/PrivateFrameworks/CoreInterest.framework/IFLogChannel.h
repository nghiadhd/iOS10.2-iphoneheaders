/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IFLogChannel : NSObject {

	int _logLevel;
	NSString* _name;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign) int logLevel;                 //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedLogChannelWithName:(id)arg1 ;
+(id)defaultChannel;
+(id)persistenceChannel;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setLogLevelFromDefaults;
@end

