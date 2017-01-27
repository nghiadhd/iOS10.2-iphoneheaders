/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSDictionary;

@interface ISDialogButton : NSObject <SSXPCCoding> {

	int _actionType;
	id _parameter;
	NSString* _title;
	long long _urlType;
	NSString* _subtarget;
	NSDictionary* _dictionary;

}

@property (retain) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (assign) int actionType;                                  //@synthesize actionType=_actionType - In the implementation block
@property (retain) id parameter;                                    //@synthesize parameter=_parameter - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (copy) NSString * subtarget;                              //@synthesize subtarget=_subtarget - In the implementation block
@property (assign) long long urlType;                               //@synthesize urlType=_urlType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithTitle:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)dictionary;
-(NSString *)title;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)setActionType:(int)arg1 ;
-(long long)urlType;
-(void)setActionTypeWithString:(id)arg1 ;
-(void)setParameter:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 superficial:(BOOL)arg2 ;
-(int)_actionTypeForString:(id)arg1 ;
-(void)setSubtarget:(NSString *)arg1 ;
-(long long)_urlTypeForString:(id)arg1 ;
-(void)setUrlType:(long long)arg1 ;
-(void)_openURLWithRequest:(id)arg1 ;
-(NSString *)subtarget;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)parameter;
-(void)loadFromDictionary:(id)arg1 ;
-(int)actionType;
-(void)performDefaultActionForDialog:(id)arg1 ;
@end

