/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
@interface MGIOKitHelper : NSObject {

	unsigned devIterator;

}
-(id)init;
-(void)dealloc;
-(void)deleteIterator;
-(unsigned)copyDeviceTreeStructureNext:(id)arg1 withFirstChar:(char)arg2 ;
-(void*)copyDeviceTreeProperty:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFNumberRef)copyNumberFromData:(CFDataRef)arg1 ;
-(void*)copyServiceTreeProperty:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(BOOL)createTreeIterator:(const char*)arg1 ;
-(BOOL)createServicesIteratorByNameMatch:(const char*)arg1 ;
-(CFNumberRef)copyNumberFromDeviceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFStringRef)copyStringFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(void*)copyPropertyFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFDataRef)copyDataFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFDataRef)copyDataFromDeviceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
-(CFBooleanRef)copyBooleanFromServiceTree:(id)arg1 withFirstChar:(char)arg2 propertyName:(id)arg3 withPropertyFirstChar:(char)arg4 ;
@end

