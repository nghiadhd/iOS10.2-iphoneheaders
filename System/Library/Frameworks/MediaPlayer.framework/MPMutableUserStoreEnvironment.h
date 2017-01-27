/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreUserEnvironment.h>

@class NSString;

@interface MPMutableUserStoreEnvironment : MPStoreUserEnvironment

@property (assign,nonatomic) unsigned long long accountIdentifier; 
@property (nonatomic,copy) NSString * storeFrontIdentifier; 
@property (nonatomic,copy) NSString * userAgentOverride; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setUserAgentOverride:(NSString *)arg1 ;
-(void)setAccountIdentifier:(unsigned long long)arg1 ;
@end

