/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSynchronizedTransactionDelegate <NSObject>
@required
-(void)synchronizedTransactionReadyToCommit:(id)arg1;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;

@end

