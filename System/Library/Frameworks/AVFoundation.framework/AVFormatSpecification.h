/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputSettings;

@interface AVFormatSpecification : NSObject {

	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatDescription;

}
+(id)formatSpecificationWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)dealloc;
-(id)outputSettings;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(id)initWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
@end

