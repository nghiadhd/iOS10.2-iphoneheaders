/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject {

	BOOL _evaluated;
	BOOL _evaluationResult;
	IKCSSMediaQueryList* _queryList;

}

@property (nonatomic,readonly) IKCSSMediaQueryList * queryList;              //@synthesize queryList=_queryList - In the implementation block
@property (readonly) BOOL evaluated;                                         //@synthesize evaluated=_evaluated - In the implementation block
@property (readonly) BOOL evaluationResult;                                  //@synthesize evaluationResult=_evaluationResult - In the implementation block
+(id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQueryExpression:(id)arg1 ;
+(id)mediaQueryFromTokenList:(id)arg1 ;
-(id)description;
-(id)initWithQueryList:(id)arg1 ;
-(void)setNeedsReEvaluation;
-(BOOL)evaluated;
-(BOOL)evaluationResult;
-(IKCSSMediaQueryList *)queryList;
-(BOOL)evaluate;
@end

