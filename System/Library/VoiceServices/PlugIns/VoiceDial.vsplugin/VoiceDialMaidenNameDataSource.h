/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceDial/VoiceDialNameDataSource.h>

@interface VoiceDialMaidenNameDataSource : VoiceDialNameDataSource
-(int)matchingNameType:(id)arg1 fromTypes:(unsigned long long)arg2 forPerson:(void*)arg3 ;
-(unsigned long long)personNameCount;
-(BOOL)getNth:(unsigned long long)arg1 name:(id*)arg2 phoneticName:(id*)arg3 ofType:(int)arg4 nameIndex:(unsigned long long*)arg5 forPerson:(void*)arg6 ;
-(BOOL)getName:(id*)arg1 phoneticName:(id*)arg2 atIndex:(unsigned long long)arg3 forPerson:(void*)arg4 ;
-(int)typeOfNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countOfNamesOfType:(int)arg1 ;
@end

