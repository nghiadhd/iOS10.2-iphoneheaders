/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSString;

@interface NTKUserPhotoContentEditOption : NTKEditOption {

	BOOL _isDefaultPhoto;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultPhoto;              //@synthesize isDefaultPhoto=_isDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(BOOL)isDefaultPhoto;
@end

