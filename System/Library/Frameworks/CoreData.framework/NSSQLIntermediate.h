/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {

	NSSQLIntermediate* _scope;

}

@property (nonatomic,readonly) NSSQLEntity * disambiguatingEntity; 
@property (nonatomic,readonly) NSArray * disambiguationKeypath; 
@property (nonatomic,readonly) BOOL disambiguationKeypathHasToMany; 
+(BOOL)isSimpleKeypath:(id)arg1 ;
+(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)isUpdateColumnsScoped;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(BOOL)isWhereScoped;
-(NSSQLEntity *)disambiguatingEntity;
-(NSArray *)disambiguationKeypath;
-(BOOL)disambiguationKeypathHasToMany;
-(BOOL)isOrScoped;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(BOOL)isTargetColumnsScoped;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)_lastScopedItem;
-(BOOL)isSimpleKeypath:(id)arg1 ;
-(BOOL)isVariableBasedKeypathScopedBySubquery:(id)arg1 ;
-(BOOL)isFunctionScoped;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)fetchIntermediate;
-(id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)isUpdateScoped;
-(id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3 ;
-(BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1 ;
-(BOOL)isHavingScoped;
-(id)governingAlias;
-(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)_entitySpecificationKeypath;
-(void)_setEntitySpecificationKeypath:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(void)promoteJoinsInKeypathsForExpression:(id)arg1 ;
-(void)_promoteJoinsForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForFunctionExpression:(id)arg1 ;
-(void)_promoteJoinsForAggregateExpression:(id)arg1 ;
-(void)_promoteJoinsForTernaryExpression:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)isSimpleNoIndexFunction:(id)arg1 ;
-(id)scope;
@end

