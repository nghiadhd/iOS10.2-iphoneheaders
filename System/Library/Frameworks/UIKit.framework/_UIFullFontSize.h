/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIFullFontSize : NSObject {

	double _value;
	BOOL _isDefault;
	BOOL _needsEvaluation;

}
+(id)defaultValue;
+(id)valued:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValue:(double)arg1 isDefault:(BOOL)arg2 ;
-(id)overrideUnlessDefault:(double)arg1 ;
-(BOOL)needsEvaluation;
-(BOOL)setNeedsEvaluation;
-(double)valueWithEvaluationIfNeeded:(/*^block*/id)arg1 ;
@end

