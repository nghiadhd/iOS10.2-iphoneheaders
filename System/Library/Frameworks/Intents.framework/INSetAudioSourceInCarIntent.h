/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetAudioSourceInCarIntentExport.h>

@class NSString;

@interface INSetAudioSourceInCarIntent : INIntent <INSetAudioSourceInCarIntentExport>

@property (nonatomic,readonly) long long audioSource; 
@property (nonatomic,readonly) long long relativeAudioSourceReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(long long)audioSource;
-(void)setAudioSource:(long long)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(void)setRelativeAudioSourceReference:(long long)arg1 ;
-(long long)relativeAudioSourceReference;
-(id)initWithAudioSource:(long long)arg1 relativeAudioSourceReference:(long long)arg2 ;
@end

