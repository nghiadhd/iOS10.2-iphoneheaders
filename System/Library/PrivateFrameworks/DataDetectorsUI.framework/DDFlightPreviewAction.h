/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDRemoteAction.h>

@class NSString;

@interface DDFlightPreviewAction : DDRemoteAction {

	BOOL _previewModeSet;
	NSString* _platerTitle;

}

@property (retain) NSString * platerTitle;              //@synthesize platerTitle=_platerTitle - In the implementation block
+(id)viewControllerProviderClass;
-(id)previewActions;
-(void)setPreviewMode:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(BOOL)wantsSeamlessCommit;
-(id)platterTitle;
-(void)setPlaterTitle:(NSString *)arg1 ;
-(NSString *)platerTitle;
@end
