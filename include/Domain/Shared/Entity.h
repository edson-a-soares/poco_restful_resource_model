/*
 * (C) Copyright 2018 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef Web_Service_Domain_Shared_Entity_INCLUDED
#define Web_Service_Domain_Shared_Entity_INCLUDED

#include <string>
#include "Domain/Shared/IEntity.h"

namespace Domain {
namespace Shared {


    class Entity : public IEntity
    {
    public:
        Entity();
        explicit Entity(const std::string &);
        virtual ~Entity() = 0;

        std::string identity() const final;
        bool operator==(const IEntity &) final;
        bool operator!=(const IEntity &) final;

    private:
        const std::string _identity;

    };


} }

#endif
