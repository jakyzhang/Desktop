//
//  __MCMContainer.h
//  Qianka
//
//  Created by 梁泽 on 2019/7/15.
//  Copyright © 2019 梁泽. All rights reserved.
//

#ifndef __MCMContainer_h
#define __MCMContainer_h
#import <Foundation/Foundation.h>

/* Generated by RuntimeBrowser
 Image: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
 */

@interface MCMContainer : NSObject
@property (nonatomic, readonly) long long containerClass;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *info;
@property (getter=isTemporary, nonatomic, readonly) bool temporary;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)containerWithIdentifier:(id)arg1 error:(id*)arg2;
- (NSString *)identifier;
- (NSDictionary *)info;
- (NSUUID *)url;
- (NSURL *)uuid;



+ (id)containerWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 error:(id*)arg4;
+ (id)temporaryContainerWithIdentifier:(id)arg1 existed:(bool*)arg2 error:(id*)arg3;

- (void)_errorOccurred;
- (long long)_getContainerClass;
- (long long)containerClass;
- (void)dealloc;
- (id)description;
- (id)destroyContainerWithCompletion:(id /* block */)arg1;
- (unsigned long long)diskUsageWithError:(id*)arg1;
//- (struct container_object { }*)getLowLevelContainerObject;
- (unsigned long long)hash;
- (id)infoValueForKey:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 temp:(bool)arg4 error:(id*)arg5;
- (id)initWithIdentifier:(id)arg1 userId:(unsigned int)arg2 uuid:(id)arg3 containerClass:(long long)arg4 error:(id*)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (void)markDeleted;
- (bool)recreateDefaultStructureWithError:(id*)arg1;
- (bool)regenerateDirectoryUUIDWithError:(id*)arg1;
- (bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;


@end

@interface MCMAppContainer : MCMContainer

@end


#endif /* __MCMContainer_h */
