/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _ASItemArtworkLoaderState : NSObject {

	BOOL _loaded;
	unsigned long long _requestIdentifier;

}

@property (assign,nonatomic) unsigned long long requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                       //@synthesize loaded=_loaded - In the implementation block
-(unsigned long long)requestIdentifier;
-(void)setRequestIdentifier:(unsigned long long)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(BOOL)loaded;
@end

