/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSQuery.h>

@class LSDocumentProxy, NSString;

@interface _LSDocumentProxyBindingQuery : _LSQuery {

	BOOL _withTypeOwner;
	BOOL _airDropStyle;
	LSDocumentProxy* _documentProxy;
	NSString* _handlerRank;

}

@property (nonatomic,retain,readonly) LSDocumentProxy * documentProxy;              //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,readonly) BOOL withTypeOwner;                                  //@synthesize withTypeOwner=_withTypeOwner - In the implementation block
@property (nonatomic,readonly) BOOL airDropStyle;                                   //@synthesize airDropStyle=_airDropStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * handlerRank;                         //@synthesize handlerRank=_handlerRank - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDocumentProxy:(id)arg1 withTypeOwner:(BOOL)arg2 airDropStyle:(BOOL)arg3 handlerRank:(id)arg4 ;
-(NSString *)handlerRank;
-(BOOL)airDropStyle;
-(int)calculatePriorityForApp:(id)arg1 cloudOwner:(id)arg2 preferredHandler:(id)arg3 ;
-(BOOL)withTypeOwner;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldCacheResolvedResults;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(LSDocumentProxy *)documentProxy;
@end

