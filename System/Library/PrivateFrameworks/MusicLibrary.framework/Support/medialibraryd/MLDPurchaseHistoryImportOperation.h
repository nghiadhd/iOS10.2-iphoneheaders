/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDDAAPImportOperation.h>

@interface MLDPurchaseHistoryImportOperation : MLDDAAPImportOperation
-(unsigned long long)importSource;
-(shared_ptr<MLDDAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(void)updateImportProgress:(float)arg1 ;
-(BOOL)_performPurchaseHistoryImportWithTransaction:(id)arg1 ;
-(void)main;
@end

