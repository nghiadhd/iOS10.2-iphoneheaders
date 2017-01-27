/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEditAdjustmentsVersion : NSObject {

	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	NSString* _platform;

}

@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned long long majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long minorVersion;              //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
+(id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3 ;
+(id)versionFromString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)string;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 ;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3 ;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(BOOL)isEqualToAdjustmentVersion:(id)arg1 ;
-(NSString *)platform;
@end

