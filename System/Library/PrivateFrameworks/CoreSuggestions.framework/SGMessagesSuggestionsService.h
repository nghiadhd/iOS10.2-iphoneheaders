/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGSuggestionsService.h>
#import <libobjc.A.dylib/SGSuggestionsServiceMessagesProtocol.h>

@protocol SGMessagesSuggestionsServiceDelegate;
@class SGMessagesDaemonConnection, NSMutableDictionary;

@interface SGMessagesSuggestionsService : SGSuggestionsService <SGSuggestionsServiceMessagesProtocol> {

	id<SGMessagesSuggestionsServiceDelegate> _delegate;
	SGMessagesDaemonConnection* _messagesDaemonConnection;
	NSMutableDictionary* _previousMessages;

}

@property (retain) SGMessagesDaemonConnection * messagesDaemonConnection;              //@synthesize messagesDaemonConnection=_messagesDaemonConnection - In the implementation block
@property (retain) NSMutableDictionary * previousMessages;                             //@synthesize previousMessages=_previousMessages - In the implementation block
@property (__weak) id<SGMessagesSuggestionsServiceDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<SGMessagesSuggestionsServiceDelegate>)arg1 ;
-(id<SGMessagesSuggestionsServiceDelegate>)delegate;
-(void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_remoteSuggestionManager;
-(void)setManagerForTesting:(id)arg1 ;
-(void)harvestedSuggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupContextIfNeededForConversation:(id)arg1 ;
-(void)sendContextForMessage:(id)arg1 ;
-(SGMessagesDaemonConnection *)messagesDaemonConnection;
-(void)setMessagesDaemonConnection:(SGMessagesDaemonConnection *)arg1 ;
-(NSMutableDictionary *)previousMessages;
-(void)setPreviousMessages:(NSMutableDictionary *)arg1 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

