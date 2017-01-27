/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double verticalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (nonatomic,copy) NSNumber * age; 
@property (assign,nonatomic) double altitude; 
@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (assign,nonatomic) double direction; 
@property (assign,nonatomic) double speed; 
@property (nonatomic,copy) NSString * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setRequestOrigin;
+(id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(void)setDirection:(double)arg1 ;
-(double)direction;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(double)altitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)desiredAccuracy;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(double)latitude;
-(double)longitude;
-(void)setAge:(NSNumber *)arg1 ;
-(NSNumber *)age;
@end

