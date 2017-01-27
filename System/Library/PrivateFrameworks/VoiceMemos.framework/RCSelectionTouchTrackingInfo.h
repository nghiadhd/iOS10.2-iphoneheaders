/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITouch;

@interface RCSelectionTouchTrackingInfo : NSObject {

	double _lastLocation;
	UITouch* _touch;
	double _trackingOffset;
	long long _selectionBarType;
	long long _selectionAffinity;

}

@property (assign,nonatomic,__weak) UITouch * touch;                   //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) double trackingOffset;                    //@synthesize trackingOffset=_trackingOffset - In the implementation block
@property (assign,nonatomic) long long selectionBarType;               //@synthesize selectionBarType=_selectionBarType - In the implementation block
@property (assign,nonatomic) long long selectionAffinity;              //@synthesize selectionAffinity=_selectionAffinity - In the implementation block
-(id)description;
-(long long)selectionAffinity;
-(void)setSelectionAffinity:(long long)arg1 ;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(void)setTrackingOffset:(double)arg1 ;
-(void)setSelectionBarType:(long long)arg1 ;
-(void)updateTrackingInfo;
-(long long)selectionBarType;
-(double)trackingOffset;
@end

