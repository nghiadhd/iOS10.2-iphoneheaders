/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/RichLinkProvider.bundle/RichLinkProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RichLinkVideoAttachmentSubstitute : LPVideo <NSSecureCoding> {

	long long _index;

}

@property (assign,nonatomic) long long index;              //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(id)initWithVideo:(id)arg1 ;
-(BOOL)_shouldEncodeData;
@end

