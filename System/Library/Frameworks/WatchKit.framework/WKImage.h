/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSData, NSString;

@interface WKImage : NSObject <NSCopying, NSSecureCoding> {

	UIImage* _image;
	NSData* _imageData;
	NSString* _imageName;

}

@property (retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (retain) NSData * imageData;                //@synthesize imageData=_imageData - In the implementation block
@property (retain) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageWithImage:(id)arg1 ;
+(id)imageWithImageName:(id)arg1 ;
+(id)imageWithImageData:(id)arg1 ;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_init;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(NSData *)imageData;
@end

