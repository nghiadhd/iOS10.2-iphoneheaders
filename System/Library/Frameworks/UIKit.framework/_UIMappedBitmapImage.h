/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImage.h>

@class NSData;

@interface _UIMappedBitmapImage : UIImage {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_configureImage:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)_preheatBitmapData;
@end

