/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _BCTransactionCommitRollbackPair : NSObject {

	/*^block*/id _commit;
	/*^block*/id _rollback;

}

@property (nonatomic,copy) id commit;                //@synthesize commit=_commit - In the implementation block
@property (nonatomic,copy) id rollback;              //@synthesize rollback=_rollback - In the implementation block
-(void)setCommit:(id)arg1 ;
-(id)commit;
-(id)rollback;
-(void)setRollback:(id)arg1 ;
@end

