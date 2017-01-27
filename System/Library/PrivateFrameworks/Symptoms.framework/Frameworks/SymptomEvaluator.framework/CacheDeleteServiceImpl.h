/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface CacheDeleteServiceImpl : NSObject
+(id)sharedInstance;
+(void)registerCallbacks:(const char*)arg1 ;
-(void)registerCallbacks:(const char*)arg1 ;
-(id)_purgeable:(id)arg1 urgency:(int)arg2 amount:(unsigned long long*)arg3 justLRU:(BOOL)arg4 ;
-(id)replyCacheDeleteDictionaryWithVolume:(id)arg1 amount:(unsigned long long)arg2 ;
-(id)cacheDeletePurgeableWithUrgency:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(id)cacheDeletePurgeWithUrgency:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(id)cacheDeletePeriodicWithInfo:(CFDictionaryRef)arg1 ;
@end

