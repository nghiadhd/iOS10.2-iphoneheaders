/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassBackFaceImageSet : PKPassImageSet {

	PKImage* _faceImage;

}

@property (nonatomic,retain) PKImage * faceImage;              //@synthesize faceImage=_faceImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(PKImage *)faceImage;
-(void)setFaceImage:(PKImage *)arg1 ;
@end

