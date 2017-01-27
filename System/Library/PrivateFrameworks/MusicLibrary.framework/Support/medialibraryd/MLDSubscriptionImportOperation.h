/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDDAAPImportOperation.h>

@interface MLDSubscriptionImportOperation : MLDDAAPImportOperation
-(unsigned long long)importSource;
-(BOOL)_performDAAPImportWithTransaction:(id)arg1 ;
-(shared_ptr<MLDDAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(shared_ptr<MLDDAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(void)updateImportProgress:(float)arg1 ;
-(void)main;
@end

