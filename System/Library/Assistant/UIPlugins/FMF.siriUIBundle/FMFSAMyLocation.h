/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFSALocation.h>

@class NSString;

@interface FMFSAMyLocation : FMFSALocation {

	BOOL isVisible;
	NSString* _username;

}

@property (assign,nonatomic) BOOL isVisible; 
@property (nonatomic,retain) NSString * username;              //@synthesize username=_username - In the implementation block
+(id)myLocation:(BOOL)arg1 andDictionary:(id)arg2 preferredEmail:(id)arg3 ;
+(id)myLocation:(BOOL)arg1 siriLocation:(id)arg2 preferredEmail:(id)arg3 ;
+(id)bundle;
-(id)initWithMyLocation:(BOOL)arg1 siriLocation:(id)arg2 preferredEmail:(id)arg3 ;
-(id)friendLocation:(BOOL)arg1 ;
-(id)prettyTimestamp;
-(void)setIsVisible:(BOOL)arg1 ;
-(id)initWithMyLocation:(BOOL)arg1 andDictionary:(id)arg2 preferredEmail:(id)arg3 ;
-(BOOL)isVisible;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

