/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSQueryGenerationToken : NSObject <NSCopying>
+(id)currentQueryGenerationToken;
+(id)unpinnedQueryGenerationToken;
+(id)nostoresQueryGenerationToken;
+(void)initialize;
-(id)_token;
-(id)_generationalComponentForStore:(id)arg1 ;
-(id)_storesForRequestRoutingFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

