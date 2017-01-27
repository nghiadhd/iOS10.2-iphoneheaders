/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRDeviceInfo.h>

@class NSString;

@interface MRMutableDeviceInfo : MRDeviceInfo

@property (nonatomic,copy) NSString * uniqueIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * localizedModelName; 
@property (nonatomic,copy) NSString * systemBuildVersion; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * applicationBundleVersion; 
@property (assign,nonatomic) unsigned long long protocolVersion; 
@property (assign,getter=isPairingAllowed,nonatomic) BOOL pairingAllowed; 
-(void)setName:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(void)setLocalizedModelName:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setApplicationBundleVersion:(NSString *)arg1 ;
-(void)setPairingAllowed:(BOOL)arg1 ;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
@end

