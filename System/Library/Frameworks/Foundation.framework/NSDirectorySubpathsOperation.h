/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableArray;

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {

	NSMutableArray* _subpaths;

}
+(id)directorySubpathsOperationAtPath:(id)arg1 ;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(id)subpaths;
-(void)handlePathname:(id)arg1 ;
-(void)dealloc;
@end

