/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKZipArchiver : NSObject
+(void)noteBOMCopier:(BOMCopierRef)arg1 succeeded:(BOOL)arg2 ;
+(void)associateBOMCopier:(BOMCopierRef)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)disassociateBOMCopier:(BOMCopierRef)arg1 ;
-(void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)zippedDataForURL:(id)arg1 ;
@end

