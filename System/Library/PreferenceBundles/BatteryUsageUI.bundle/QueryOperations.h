/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSArray;

@interface QueryOperations : NSOperation {

	/*^block*/id _completion;
	int _queryType;
	NSString* _manualFileName;
	NSString* _functionName;
	NSArray* _graphArray;

}

@property (nonatomic,retain) NSString * manualFileName;              //@synthesize manualFileName=_manualFileName - In the implementation block
@property (nonatomic,retain) NSString * functionName;                //@synthesize functionName=_functionName - In the implementation block
@property (assign,nonatomic) int queryType;                          //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,retain) NSArray * graphArray;                   //@synthesize graphArray=_graphArray - In the implementation block
-(int)queryType;
-(void)setManualFileName:(NSString *)arg1 ;
-(void)setGraphArray:(NSArray *)arg1 ;
-(void)setQueryType:(int)arg1 ;
-(NSArray *)graphArray;
-(NSString *)manualFileName;
-(id)init;
-(void)main;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
@end

