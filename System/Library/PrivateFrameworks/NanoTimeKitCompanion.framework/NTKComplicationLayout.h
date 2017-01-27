/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NTKComplicationStateLayout;

@interface NTKComplicationLayout : NSObject {

	_NTKComplicationStateLayout* _stateLayouts[4];

}
+(id)layoutWithDefaultRule:(id)arg1 ;
-(void)dealloc;
-(void)setDefaultLayoutRule:(id)arg1 forState:(long long)arg2 ;
-(void)setOverrideLayoutRule:(id)arg1 forState:(long long)arg2 layoutOverride:(long long)arg3 ;
-(id)defaultLayoutRuleForState:(long long)arg1 ;
-(id)_layoutForState:(long long)arg1 ;
-(id)layoutRuleForComplicationState:(long long)arg1 layoutOverride:(long long)arg2 ;
@end
