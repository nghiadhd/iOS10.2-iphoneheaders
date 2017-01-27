/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {

	NSMutableDictionary* _itemIdentifierToStoreItemMetadata;
	BOOL _finalResponse;

}

@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;              //@synthesize finalResponse=_finalResponse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)storeItemMetadataForItemIdentifier:(id)arg1 ;
-(BOOL)isFinalResponse;
-(void)setFinalResponse:(BOOL)arg1 ;
-(void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(BOOL*)arg2 ;
-(NSArray *)itemIdentifiers;
@end

