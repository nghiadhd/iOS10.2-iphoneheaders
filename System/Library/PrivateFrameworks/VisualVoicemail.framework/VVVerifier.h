/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface VVVerifier : NSObject {

	NSMutableDictionary* _checkpointDictionary;
	NSArray* _keyDescriptions;

}
+(id)sharedVerifier;
-(id)configurationDictionary;
-(id)_checkpointDictionaryFilePath;
-(id)keyDescriptions;
-(id)_checkpointDictionary;
-(void)_saveCheckpointDictionary;
-(BOOL)valueForCheckpointKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4 ;
-(void)storeValue:(BOOL)arg1 forCheckpointKey:(id)arg2 ;
-(id)readableError;
-(void)_checkpointDictionaryChanged;
-(id)humanReadableConfigurationDictionary:(id*)arg1 ;
@end

