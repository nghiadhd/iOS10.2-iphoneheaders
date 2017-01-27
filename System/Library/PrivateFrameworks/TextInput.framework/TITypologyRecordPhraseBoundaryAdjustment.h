/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord {

	BOOL _forwardAdjustment;
	int _granularity;
	TIKeyboardState* _keyboardState;
	TIKeyboardConfiguration* _keyboardConfig;

}

@property (assign,nonatomic) BOOL forwardAdjustment;                                //@synthesize forwardAdjustment=_forwardAdjustment - In the implementation block
@property (assign,nonatomic) int granularity;                                       //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
-(TIKeyboardConfiguration *)keyboardConfig;
-(BOOL)forwardAdjustment;
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)granularity;
-(id)shortDescription;
-(void)setGranularity:(int)arg1 ;
-(void)setForwardAdjustment:(BOOL)arg1 ;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardState *)keyboardState;
@end

