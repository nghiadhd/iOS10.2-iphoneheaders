/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface ISBiometricOptInOperation : ISOperation {

	BOOL _promptUser;
	/*^block*/id _resultBlock;

}

@property (assign) BOOL promptUser; 
@property (copy) id resultBlock; 
-(void)run;
-(void)setPromptUser:(BOOL)arg1 ;
-(BOOL)promptUser;
-(BOOL)_performOptInDialogOperationWithError:(id*)arg1 ;
-(BOOL)_performPasscodeDialogOperationWithError:(id*)arg1 ;
-(void)_updateTouchIDSettingsForAccount:(id)arg1 ;
-(id)_newSourceByStartingTimeoutTimer;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end

