/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression {

	unsigned short _operatorChar;

}

@property (nonatomic,readonly) unsigned short operatorChar;              //@synthesize operatorChar=_operatorChar - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(BOOL)canBeUsedWithRange;
-(BOOL)isNaturalSuperscript;
-(BOOL)isEllipsis;
-(BOOL)isTermSeparator;
-(BOOL)isOperationSymbol;
-(BOOL)isFenceDelimiter;
-(id)latexFormatStringAsOver;
-(BOOL)_isIntegral;
-(BOOL)_isUnionOrIntersection;
-(BOOL)_isSummation;
-(BOOL)_isRingOperator;
-(BOOL)_isInvisibleCharacter;
-(BOOL)_isMinusSign;
-(unsigned short)operatorChar;
-(id)mathMLString;
@end

