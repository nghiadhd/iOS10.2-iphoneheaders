/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush {

	OITSUColor* m_colour;
	int m_style;

}
+(id)hatchBrushWithColour:(id)arg1 :(int)arg2 ;
+(id)patternNameForHatchStyle:(int)arg1 ;
-(void)dealloc;
-(void)fillPath:(id)arg1 :(id)arg2 ;
-(id)initWithColour:(id)arg1 :(int)arg2 ;
@end

