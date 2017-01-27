/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSString;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {

	BOOL _beta;
	NSMutableDictionary* _etags;
	BOOL _placeholder;
	BOOL _profileValidated;
	NSMutableDictionary* _propertyValues;
	BOOL _launchProhibited;

}

@property (assign,getter=isBeta,nonatomic) BOOL beta;                                      //@synthesize beta=_beta - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) BOOL launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                        //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(id)ETagForAssetType:(id)arg1 ;
-(BOOL)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3 ;
-(id)_initWithITunesMetadata:(id)arg1 ;
-(void)setBeta:(BOOL)arg1 ;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
-(void)dealloc;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)isBeta;
-(BOOL)isLaunchProhibited;
@end

