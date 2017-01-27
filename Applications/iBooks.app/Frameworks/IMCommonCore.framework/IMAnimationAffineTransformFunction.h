/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class CAMediaTimingFunction, IMAnimationFloatFunction;

@interface IMAnimationAffineTransformFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	IMAnimationFloatFunction* _aFunction;
	IMAnimationFloatFunction* _bFunction;
	IMAnimationFloatFunction* _cFunction;
	IMAnimationFloatFunction* _dFunction;
	IMAnimationFloatFunction* _txFunction;
	IMAnimationFloatFunction* _tyFunction;
	CGAffineTransform _startValue;
	CGAffineTransform _endValue;

}

@property (nonatomic,retain) IMAnimationFloatFunction * aFunction;                //@synthesize aFunction=_aFunction - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * bFunction;                //@synthesize bFunction=_bFunction - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * cFunction;                //@synthesize cFunction=_cFunction - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * dFunction;                //@synthesize dFunction=_dFunction - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * txFunction;               //@synthesize txFunction=_txFunction - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * tyFunction;               //@synthesize tyFunction=_tyFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGAffineTransform startValue;                        //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGAffineTransform endValue;                          //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(CGAffineTransform)solveForTime:(double)arg1 ;
-(void)_reloadFunctions;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGAffineTransform)arg2 endRect:(CGAffineTransform)arg3 speed:(double)arg4 ;
-(IMAnimationFloatFunction *)aFunction;
-(IMAnimationFloatFunction *)bFunction;
-(IMAnimationFloatFunction *)cFunction;
-(IMAnimationFloatFunction *)dFunction;
-(IMAnimationFloatFunction *)txFunction;
-(IMAnimationFloatFunction *)tyFunction;
-(void)setAFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setBFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setCFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setDFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setTxFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setTyFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartValue:(CGAffineTransform)arg1 ;
-(void)setEndValue:(CGAffineTransform)arg1 ;
-(CGAffineTransform)endValue;
-(CGAffineTransform)startValue;
@end

