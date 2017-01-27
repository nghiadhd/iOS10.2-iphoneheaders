/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxParameterCreationAPI
@required
-(BOOL)addFloatSliderWithName:(id)arg1 parmId:(unsigned)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned)arg9;
-(BOOL)addIntSliderWithName:(id)arg1 parmId:(unsigned)arg2 defaultValue:(int)arg3 parameterMin:(int)arg4 parameterMax:(int)arg5 sliderMin:(int)arg6 sliderMax:(int)arg7 delta:(int)arg8 parmFlags:(unsigned)arg9;
-(BOOL)addToggleButtonWithName:(id)arg1 parmId:(unsigned)arg2 defaultValue:(BOOL)arg3 parmFlags:(unsigned)arg4;
-(BOOL)addAngleSliderWithName:(id)arg1 parmId:(unsigned)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 parmFlags:(unsigned)arg6;
-(BOOL)addColorParameterWithName:(id)arg1 parmId:(unsigned)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 parmFlags:(unsigned)arg6;
-(BOOL)addColorParameterWithName:(id)arg1 parmId:(unsigned)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 defaultAlpha:(double)arg6 parmFlags:(unsigned)arg7;
-(BOOL)addPointParameterWithName:(id)arg1 parmId:(unsigned)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned)arg5;
-(BOOL)addPopupMenuWithName:(id)arg1 parmId:(unsigned)arg2 defaultValue:(unsigned)arg3 menuEntries:(id)arg4 parmFlags:(unsigned)arg5;
-(BOOL)addImageReferenceWithName:(id)arg1 parmId:(unsigned)arg2 parmFlags:(unsigned)arg3;
-(BOOL)addCustomParameterWithName:(id)arg1 parmId:(unsigned)arg2 defaultValue:(id)arg3 parmFlags:(unsigned)arg4;
-(BOOL)startParameterSubGroup:(id)arg1 parmId:(unsigned)arg2 parmFlags:(unsigned)arg3;
-(BOOL)endParameterSubGroup;

@end

