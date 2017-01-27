/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIPSShimDelegate, OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSMutableString, NSString, NSMutableSet, NSMutableDictionary;

@interface CLIPSShim : NSObject {

	unsigned _strongAddressType;
	id<CLIPSShimDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	long long _defaultConstructsLoadState;
	void* _environment;
	NSMutableString* _dumpedString;
	NSMutableString* _consoleContents;
	NSString* _currentCommand;
	unsigned long long _commandStringLoc;
	NSMutableSet* _clipsHeldObjects;
	NSMutableDictionary* _invocationMap;
	SCD_Struct_CL31* _consoleNameRegex;
	SCD_Struct_CL31* _dumpStringRegex;

}

@property (assign,nonatomic) unsigned strongAddressType;                          //@synthesize strongAddressType=_strongAddressType - In the implementation block
@property (assign,nonatomic) void* environment;                                   //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL32* consoleNameRegex;                   //@synthesize consoleNameRegex=_consoleNameRegex - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL32* dumpStringRegex;                    //@synthesize dumpStringRegex=_dumpStringRegex - In the implementation block
@property (nonatomic,retain) NSMutableString * dumpedString;                      //@synthesize dumpedString=_dumpedString - In the implementation block
@property (nonatomic,retain) NSMutableString * consoleContents;                   //@synthesize consoleContents=_consoleContents - In the implementation block
@property (nonatomic,retain) NSString * currentCommand;                           //@synthesize currentCommand=_currentCommand - In the implementation block
@property (assign,nonatomic) unsigned long long commandStringLoc;                 //@synthesize commandStringLoc=_commandStringLoc - In the implementation block
@property (nonatomic,retain) NSMutableSet * clipsHeldObjects;                     //@synthesize clipsHeldObjects=_clipsHeldObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invocationMap;                 //@synthesize invocationMap=_invocationMap - In the implementation block
@property (nonatomic,retain) id<CLIPSShimDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long defaultConstructsLoadState;              //@synthesize defaultConstructsLoadState=_defaultConstructsLoadState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDelegate:(id<CLIPSShimDelegate>)arg1 ;
-(void)dealloc;
-(id<CLIPSShimDelegate>)delegate;
-(void*)environment;
-(void)reset;
-(long long)run;
-(void)clear;
-(void)setEnvironment:(void*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)log:(id)arg1 ;
-(void)reportError:(id)arg1 ;
-(BOOL)conservePrettyPrintMemory:(BOOL)arg1 ;
-(void)logFacts:(long long)arg1 ;
-(long long)defaultConstructsLoadState;
-(void)registerCallbackFunction:(id)arg1 selector:(SEL)arg2 target:(id)arg3 ;
-(BOOL)loadDefaultRules;
-(long long)releaseAllFreeMemory;
-(void*)assertFactString:(id)arg1 moduleName:(id)arg2 ;
-(void)retractFact:(void*)arg1 ;
-(id)currentRuleName;
-(long long)memoryUsed;
-(void)setCommandStringLoc:(unsigned long long)arg1 ;
-(void)setCurrentCommand:(NSString *)arg1 ;
-(id)objectFromMultifieldArg:(void*)arg1 start:(long long)arg2 end:(long long)arg3 ;
-(void)addCallbackInvocation:(id)arg1 invocation:(id)arg2 ;
-(id)swapConsoleBuffer:(id)arg1 ;
-(id)consoleBuffer;
-(id)printedFacts:(id)arg1 limit:(long long)arg2 ;
-(void)_logFactsForModule:(id)arg1 limit:(long long)arg2 when:(long long)arg3 ;
-(unsigned long long)factCount;
-(BOOL)loadRulesFromURL:(id)arg1 moduleName:(id)arg2 ;
-(int)executeBatchCommand:(id)arg1 ;
-(void)setCommandString:(id)arg1 ;
-(long long)run:(long long)arg1 ;
-(void)listRules;
-(void)listDeffunctions;
-(void)listEverything;
-(id)objectForDO:(dataObject*)arg1 ;
-(void)removeCallbackInvocation:(id)arg1 ;
-(void*)addObjectToEnvironment:(id)arg1 ;
-(id)dumpEngineStatusWithContext:(id)arg1 ;
-(id)moduleNames;
-(id)moduleRulesByName:(id)arg1 ;
-(BOOL)loadAllRulesAtPath:(id)arg1 ;
-(void)executeCommand:(id)arg1 moduleName:(id)arg2 ;
-(void)releaseFact:(void*)arg1 ;
-(void)pushFocus:(id)arg1 ;
-(BOOL)hasDeftemplateInModule:(id)arg1 moduleName:(id)arg2 ;
-(unsigned)strongAddressType;
-(void)setStrongAddressType:(unsigned)arg1 ;
-(SCD_Struct_CL32*)consoleNameRegex;
-(void)setConsoleNameRegex:(SCD_Struct_CL32*)arg1 ;
-(SCD_Struct_CL32*)dumpStringRegex;
-(void)setDumpStringRegex:(SCD_Struct_CL32*)arg1 ;
-(NSMutableString *)dumpedString;
-(void)setDumpedString:(NSMutableString *)arg1 ;
-(NSMutableString *)consoleContents;
-(void)setConsoleContents:(NSMutableString *)arg1 ;
-(NSString *)currentCommand;
-(unsigned long long)commandStringLoc;
-(NSMutableSet *)clipsHeldObjects;
-(void)setClipsHeldObjects:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)invocationMap;
-(void)setInvocationMap:(NSMutableDictionary *)arg1 ;
@end

