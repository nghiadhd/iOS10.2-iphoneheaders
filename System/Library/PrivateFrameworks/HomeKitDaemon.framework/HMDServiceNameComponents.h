/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMDServiceNameComponents : NSObject {

	NSString* _rawServiceName;
	NSString* _serviceName;
	NSString* _roomName;
	NSString* _format;

}

@property (nonatomic,retain) NSString * rawServiceName;              //@synthesize rawServiceName=_rawServiceName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * roomName;                    //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,retain) NSString * format;                      //@synthesize format=_format - In the implementation block
+(id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3 ;
+(id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)composedName;
-(id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3 ;
-(void)setRawServiceName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(NSString *)roomName;
-(NSString *)rawServiceName;
@end

