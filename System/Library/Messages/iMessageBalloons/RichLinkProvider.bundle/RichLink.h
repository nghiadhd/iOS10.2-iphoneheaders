/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/RichLinkProvider.bundle/RichLinkProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata;

@interface RichLink : NSObject <NSSecureCoding> {

	BOOL _placeholder;
	BOOL _needsSubresourceFetch;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,copy) LPLinkMetadata * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL needsSubresourceFetch;                         //@synthesize needsSubresourceFetch=_needsSubresourceFetch - In the implementation block
+(id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setNeedsSubresourceFetch:(BOOL)arg1 ;
-(BOOL)needsSubresourceFetch;
-(id)dataRepresentationWithOutOfLineAttachments:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(BOOL)isPlaceholder;
@end

